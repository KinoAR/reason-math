type point = (float, float);


/* Calculates the length of a vector/point */
let square = (x) => x *. x;
let length = (x:point) => sqrt((fst(x) *. fst(x)) +. (snd(x) *. snd(x)));
let lengthSquared = (x) => x |> length |> square; 

module Vector2 =  {
  /* Returns Unit Length Vector 
  * Unit length vectors are the length of the vector divided by each part.
  */
  let unitLength = ((x, y):point):point => {
    let length = (x, y) |> length;
    (x /. length, y /. length);
  };

  let add = (x:point, y:point ) => {
    (fst(x) +. fst(y), snd(x) +. snd(y));
  };

  let subtract = (x:point, y:point) => {
    (fst(x) -. fst(y), snd(x) -. snd(y));
  };
};

module Vector3 = {

};

