// alert("Hello world");
// a++;
// a = a++;
// alert(a);
// var sac = prompt("Your name");
// if (sac == null){
//     alert("ok, bye");
// }
// else{
//     alert("Ye, " + sac);
// }
// var names = [];
// var name = prompt("Nhap: ");
// names.push(name);
// var a = prompt("Nhap: ");
// names.push(a);
// alert(names);
//arr.shift(): remove one or many first element
//arr.pop(): remove last element
//arr.unshift(): add one or many in 0-index
//arr.push(): add one or many element in the end of arr
//arr.splice(start, num, ...): cut num of elemnt of arr from index start, and add ... at this place
//arr.slice(): copy arr
// var numbers = [1,2,3,4,5,6,7,8,9];
// numbers.splice(2,3,10,11,12); -> numbers= [1,2,10,11,12,6,7...]
//strs = "abcdef"
//strs.indexOf(string) => return index find string in strs
//strs.slice(i, i+ x): copy from i -> i+ x -1 index
//strs.replace(str1, string): replace str1 by string, put str1 between /../p to replace all of them
//num
// alert(numbers);
//string.charAt(index): return char at index

// var name = prompt("Your name: ");
// function printInfo(name){
//     console.log("Your name: " + name);
// }

//Math
//round : >= 0.5 up; < 0.5 down
//floor: down
//ceil: up
//random: return a decimal number from 0 to 0.999... (16 so 9)

//praseInt(strs): convert string to int
//praseFloat(strs): convert string to float
//Number(strs): convert string to number
//.toString(): conver number to string
//.toFixed(num): var a= 1.2355; a= a.toFixed(2) => a = 1.24
//new Date("month date, year hour:min:second"): init specify time
//time.setDay(day), setFullYear(yyyy),...
// var te = new Date("June 1, 2023");
// var ged = te.getTime() //- new Date().getTime();
// console.log(Math.floor(ged/(60*60*24*1000*365)));


//Object
// var of = "school";

// var student = {
//     name: "ABC",
//     age: 18,
//     [of]: "S",
//     get_name = function(){
//    
//}
// }

// student[of] = "PTIT";
// // add new field:
// student.ma = "asas";
// student["full-name"] = "A ABC";
// console.log(student);

// var listNodes = document.querySelectorAll('div h2');

// console.log(listNodes);

// var chooseBox = document.getElementsByTagName('div');

// console.log(chooseBox);

// var chooses = document.getElementById('a');

// console.log(chooses);


let counter = document.getElementById("counter");
console.log(counter);
let count = 0;
function increment(){
    count = count + 1;
    counter.innerText = count + "A"+5;
}
