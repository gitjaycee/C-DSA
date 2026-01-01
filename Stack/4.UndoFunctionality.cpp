// Simulate a basic “undo” for a text editor:
//     - User enters a few actions (like typing letters: a, b, c).
//     - Push each action onto the stack.
//     - When the user types “undo”, pop the last action and show the current text.