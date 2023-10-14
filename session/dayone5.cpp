


// //normal if else 

// #include <iostream>
// using namespace std;
// int main() {

// int age;
// cin>>age;

// if (age>=18){
// cout<<"you are eligible to vote";
// }
// else {
// 	cout<<"sorry you are not eligible to vote";
// }



// 	return 0;
// }




// //normal if 


// #include <iostream>
// using namespace std;
// int main() {

// int money;
// cin>>money;

// if (money>1000){
// cout<<"you are rich";
// }



// 	return 0;
// }



// //if else else if


// #include <iostream>
// using namespace std;
// int main() {

// int age;
// cin>>age;

// if (age>=20){
// cout<<"adult";
// }
// else if (age>=12){
// 	cout<<"teenager";
// }
// else {
// 	cout<<"kid";
// }

// return 0;
// }



// // nested if else

// #include <iostream>
// using namespace std;
// int main() {

//    int score;

//     cout << "Enter the student's score: ";
//     cin >> score;

//     if (score >= 0 && score <= 100) {
//         if (score >= 90) {
//             cout << "Grade: A" << endl;
//         } else if (score >= 80) {
//             cout << "Grade: B" << endl;
//         } else if (score >= 70) {
//             cout << "Grade: C" << endl;
//         } else if (score >= 60) {
//             cout << "Grade: D" << endl;
//         } else {
//             cout << "Grade: F (Fail)" << endl;
//         }
//     } else {
//         cout << "Invalid score. Please enter a score between 0 and 100." << endl;
//     }

// return 0;
// }


// #include <iostream>

// using namespace std;

// int main() {
//     int num1 = 10;
//     int num2 = 20;

//     // Using the ternary operator to find the maximum of two numbers
//     int maxNum = (num1 > num2) ? num1 : num2;

//     cout << "The maximum number between " << num1 << " and " << num2 << " is: " << maxNum << endl;

//     return 0;
// }






// // switch case in c++
// #include <iostream>

// using namespace std;

// int main() {
//     int choice;

//     cout << "Choose an option:\n";
//     cout << "1. Play game\n";
//     cout << "2. Load game\n";
//     cout << "3. Quit\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "Starting a new game..." << endl;
//             // Add code to start the game here
//             break;
//         case 2:
//             cout << "Loading a saved game..." << endl;
//             // Add code to load a game here
//             break;
//         case 3:
//             cout << "Quitting the program. Goodbye!" << endl;
//             break;
//         default:
//             cout << "Invalid choice. Please select a valid option (1, 2, or 3)." << endl;
//     }

//     return 0;
// }


//design basic caluculator 

// # include <iostream>
// using namespace std;

// int main() {

//   char op;
//   float num1, num2;

//   cout << "Enter operator: +, -, *, /: ";
//   cin >> op;

//   cout << "Enter two operands: ";
//   cin >> num1 >> num2;

//   switch(op) {

//     case '+':
//       cout << num1 << " + " << num2 << " = " << num1 + num2;
//       break;

//     case '-':
//       cout << num1 << " - " << num2 << " = " << num1 - num2;
//       break;

//     case '*':
//       cout << num1 << " * " << num2 << " = " << num1 * num2;
//       break;

//     case '/':
//       cout << num1 << " / " << num2 << " = " << num1 / num2;
//       break;

//     default:
//       // If the operator is other than +, -, * or /, error message is shown
//       cout << "Error! operator is not correct";
//       break;
//   }

//   return 0;
// }




