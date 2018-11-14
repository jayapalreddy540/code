<?php
include('../Database/dbConnect.php');
$con=getConnection();
    

/* turn autocommit on */
mysqli_autocommit($con, FALSE);

mysqli_begin_transaction($con);

$w=mysqli_query($con, "CREATE TABLE IF NOT EXISTS myCity (num int)");
if(!$w) echo "NO"; else echo"Yes";
//mysqli_query($con, "ALTER TABLE myCity Type=InnoDB");
mysqli_savepoint($con,"s1");
mysqli_query($con, "INSERT INTO myCity values(121)");
mysqli_query($con, "INSERT INTO myCity values(1211)");

/* commit insert */
//mysqli_commit($con);


/* delete all rows */
//mysqli_query($con, "DELETE FROM myCity");

if ($result = mysqli_query($con, "SELECT COUNT(*) FROM myCity")) {
    $row = mysqli_fetch_row($result);
    echo "rows in table myCity ".$row[0];
    /* Free result */
    mysqli_free_result($result);
}

/* Rollback */
mysqli_rollback($con,1,"s1");

if ($result = mysqli_query($con, "SELECT COUNT(*) FROM myCity")) {
    $row = mysqli_fetch_row($result);
    echo "rows in table myCity (after rollback)". $row[0];
    /* Free result */
    mysqli_free_result($result);
}

/* Drop table myCity */
//mysqli_query($con, "DROP TABLE myCity");

/* close connection */
mysqli_close($con);
?>