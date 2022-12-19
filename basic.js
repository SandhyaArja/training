 * Write your code here and log the output.
 */
let object={
    name: "Mercedes Benz",
    model: "C-Class",
    manufacturer: "Daimler AG company",
    length: "4686mm",
    'cargo capacity': "12.6 cubic feet",
};
console.log(object);


2.create log an array
let myArray=["Orange",25,100,true,33.58];
console.log(myArray);

3.Access the values of an array
function main() {
  // index
  let index = parseInt(readLine());
  // myArray
  let myArray = [25, false, "green", "apple"];

  /*
   * Write your code here and log the output.
   */
   console.log(myArray[index]);
}

4.update the values of an Array
function main() {
  // index
  let index = parseInt(readLine());
  // val
  let val = parseInt(readLine());
  // myArray
  let myArray = [25, 50, "center", 75, 100];

  /*
   * Write your code here and log the output.
   */
   myArray[index]=val;
   console.log(myArray);
}

5.finding the len of array
function main() {
  let input = readLine().replace(/'/g, '"');
  // myArray
  let myArray = JSON.parse(input);

  /*
   *Write your code here and log the output.
   */
   console.log(myArray.length);
}


6,add the vales at the end of array 
function main() {
  let input = readLine().replace(/'/g, '"');
  // myArray
  let myArray = JSON.parse(input);
  // val
  let val = parseInt(readLine());

  /*
   * Write your code here and log the output.
   */
   myArray.push(val);
   console.log(myArray)
   
  7.datele  the last elements of array
  unction main() {
  let input = readLine().replace(/'/g, '"');
  // myArray
  let myArray = JSON.parse(input);

  /*
   * Write your code here and log the output.
   */
   let lastElement=myArray.pop();
   console.log(lastElement);
   console.log(myArray);
   
   
}
8.

