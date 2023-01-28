<?php

// getting the value of name field
$name = $_POST["name"];
if(empty($name)) {
    echo "Name is required";
    echo"<br>";
}
// getting the value of the email field
$email = $_POST["e-mail"];
if(!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    echo "Email value invalid";
    echo "<br>";
}
// getting the value of the aboutme field
$aboutme = $_POST["aboutme"];
// getting the value of the radio buttons
$gender = $_POST["gender"];
echo "Form submitted successfully";

?>