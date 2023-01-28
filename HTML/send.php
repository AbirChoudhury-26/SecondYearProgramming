<?php

$host = "localhost";
$user = "root";
$pass = "
";
$df = "non-revenue-water";
$con = new mysqli($host, $user, $pass, $df);
if (!$con) {
    echo "There are some problem while connecting ";
}
$fname = $_POST['fname'];
$lname = $_POST['lname'];
$phone = $_POST['phone'];
$gender = $_POST['gender'];
$msg = $_POST['msg'];
$email = $_POST['email'];
$password = $_POST['password'];
$country = $_POST['country'];
$city = $_POST['city'];



 


$qry = "INSERT INTO `consumer-login`(`Bill_Id`,'Name','E-mail) VALUES ('$fname','$lname',$phone,'$gender','$msg','$email','$password','$country','$city')";
$insert = mysqli_query($con, $qry);
if (!$insert) {
    echo "There are some problem while inserting data";
} else {
    echo "Data Inserted";
}
