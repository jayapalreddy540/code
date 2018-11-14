<!Doctype html>
<head>
 <title> Homepage</title>
<body>
<table border="1">
<th> heading</th>
<tr>
<td>
<?php
$x=32;
define("pi","3.14","true"); 	// creating constant variable "true->case-insensitive" default is "false"
echo pi;						// need not to use $ symbol for constant and they are global
global $name;    				//global keyword for access of variable throughout php file
 $name="jaypal";
echo "<p> hello ". $name."<br> hello ".$name;
#print if($name=="jaypal");
echo $x++; // post-increment operator
?>

</td>
</tr>
</table>
<?php
 $toss=array("heads","tails");
 echo count($toss);	
 var_dump($toss);   			// finding datatype and data of a variable
 print "<br>".$name;     		 //testing of global variable
  $t=date("H");
  echo "<br>";
  echo "<br>";
  $numbers = array(4,5,2,8,1);
  sort($numbers);					//sorting array
  for($x=0;$x<count($numbers);$x++)
	  echo $numbers[$x];
  echo "<br>";
  
  $details = array("a"=>"1","b"=>"2","c"=>"3");  //assosiative array
   asort($details);      // key sort
    foreach($details as $x=>$x_value)
	{
	  echo $x.$x_value."<br>";
	}
   
  if($t>6)                      //  if else statement
	  echo "<br>day <br>";
  else echo "night <br>";
 $t=2;
 switch($t)						//switch case
 {
	 case 1: echo "one"; break;
	 case 2: echo "two";break;
	 case 3: echo "three";break;
 }	
  echo "<br>";
  $x=5;
   while($x--)     				// while loop
   {
      echo $x;
   }	  
 echo "<br>";
  for($i=0;$i<5;$i++)			//for loop
	  echo $i;
	  
 echo "<br>";
   
   foreach($toss as $value)      // foreach loop
       echo "$value <br>";
	   
 function  test($name,$age)			// function with arguments
 {
	 echo "name is ".$name." and age is ".$age;
 }
 test("jpal",19);
 
 function defaultArg($name="jpal")
 {
	 echo "<br>name is ".$name;
 }
 defaultArg("hai");
 defaultArg();     // default argument
 echo "<br>";
 function add($x,$y)    // function return
 {
    return $x+$y;
 }
  echo add(12,12); 
  
  
  echo $_SERVER['SERVER_ADDR'];
 ?>
</body>