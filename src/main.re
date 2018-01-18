open Math;

open Utility;

let cp = (2.0, (-1.0));

let ci = (3.0, 1.5);

let x = lengthSquared(cp);

print_float(length(cp));

printPointl(Vector2.unitLength(cp));

printPointl(Vector2.add(cp, ci));