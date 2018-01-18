let printPoint = ((x, y)) => Printf.printf("[%f, %f]", x, y);
let printPointl = ((x, y)) =>{
  (x, y) |> printPoint; 
  print_endline("");
};