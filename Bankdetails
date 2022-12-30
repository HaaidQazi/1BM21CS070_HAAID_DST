import java.util.*;
import java.lang.Math;
class bank {
Scanner sc = new Scanner(System.in);
String name;
int acc_no;
float bal,si;
void accept() {
System.out.println("Enter your name");
name = sc.nextLine();
System.out.println("Enter the balance amount");
bal = sc.nextFloat();
}
void display() {
System.out.println("Name : "+name);
}
void deposit() {
float amount;
int choice;
System.out.println("Do you want to deposit(1 for yes ,2 for no)");
choice = sc.nextInt();
if(choice==1) {
System.out.println("Enter the amount to be deposited");
amount = sc.nextFloat();
if(amount > bal) {
System.out.println("Amount in bank insufficient");
}
else {
bal = bal + amount;
}
System.out.println("Current balance : "+bal);
}
}
}
class current extends bank {
int service_fee = 50;
void cheque() {
System.out.println("Cheque service available");
}
void withdrawal() {
float amt;
System.out.println("Enter the amount to be withdrawn");
amt = sc.nextFloat();
if(amt>bal) 
System.out.println("Balance insufficient");
else {
bal = bal - amt;
if(bal<1000) {
bal = bal - service_fee;
System.out.println("50 rs is taken as service fee");
}
System.out.println("Withdrawn : "+amt);
System.out.println("Current balance : "+bal);
}
}
}
class savings extends bank {
void cheque() {
System.out.println("Cheque service not available");
}
void withdrawal() {
float amt;
System.out.println("Enter the amount to be withdrawn");
amt = sc.nextFloat();
if(amt>bal) 
System.out.println("Balance insufficient");
else
bal = bal - amt;
System.out.println("Withdrawn : "+amt);
System.out.println("Current balance : "+bal);
}
void interest() {
System.out.println("Enter the rate of interest");
int r = sc.nextInt();
System.out.println("Enter the number of times interest applied per time period");
int n = sc.nextInt();
System.out.println("Enter the time elapsed");
int t = sc.nextInt();
si = bal*(1+(r/n));
System.out.println("Compound interest is "+(Math.pow(si,n*t)));
}
}
class account {
public static void main(String args[]) {
Scanner sc = new Scanner(System.in);
savings obj1 = new savings();
current obj2 = new current();
System.out.println("\n1.Savings account\n2.Current account");
int choice = sc.nextInt();
switch(choice) {
case 1:
	obj1.accept();
	obj1.display();
	obj1.cheque();
	obj1.deposit();
	obj1.interest();
	obj1.withdrawal();
	break;
case 2:
	obj2.accept();
	obj2.display();
	obj2.cheque();
	obj2.deposit();
	obj2.withdrawal();
	break;
default : System.out.println("Invalid choice");
}
}
}
