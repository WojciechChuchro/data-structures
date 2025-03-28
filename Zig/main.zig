const std = @import("std");

// Node structure for the linked list
pub fn Node(comptime T: type) type {
    return struct {
        data: T,
        next: ?*@This(),

        const Self = @This();

        pub fn init(data: T) Self {
            return Self{
                .data = data,
                .next = null,
            };
        }
    };
}

// LinkedList structure
pub fn LinkedList(comptime T: type) type {
    return struct {
        head: ?*Node(T),
        size: usize,

        const Self = @This();

        pub fn init() Self {
            return Self{
                .head = null,
                .size = 0,
            };
        }

        pub fn insert(self: *Self, data: T) !void {
            const new_node = try std.heap.page_allocator.create(Node(T));
            new_node.* = Node(T).init(data);
            new_node.next = self.head;
            self.head = new_node;
            self.size += 1;
        }

        pub fn delete(self: *Self, data: T) bool {
            var current = self.head;
            var prev: ?*Node(T) = null;

            while (current) |node| {
                if (node.data == data) {
                    if (prev) |prev_node| {
                        prev_node.next = node.next;
                    } else {
                        self.head = node.next;
                    }
                    std.heap.page_allocator.destroy(node);
                    self.size -= 1;
                    return true;
                }
                prev = node;
                current = node.next;
            }
            return false;
        }

        pub fn print(self: *const Self) void {
            var current = self.head;
            std.debug.print("LinkedList: ", .{});
            while (current) |node| {
                std.debug.print("{d} -> ", .{node.data});
                current = node.next;
            }
            std.debug.print("null\n", .{});
        }

        pub fn deinit(self: *Self) void {
            var current = self.head;
            while (current) |node| {
                const next = node.next;
                std.heap.page_allocator.destroy(node);
                current = next;
            }
            self.head = null;
            self.size = 0;
        }
    };
}

pub fn main() !void {
    // Create a linked list of integers
    var list = LinkedList(i32).init();

    // Insert some values
    try list.insert(10);
    try list.insert(20);
    try list.insert(30);
    try list.insert(40);

    // Print the list
    std.debug.print("Initial list:\n", .{});
    list.print();

    // Delete a value
    const deleted = list.delete(20);
    if (deleted) {
        std.debug.print("\nAfter deleting 20:\n", .{});
        list.print();
    }

    // Clean up
    list.deinit();
}
