<?php 
for ($jdk=0; $jdk<50; $jdk++) {
?><html>
<head>
<?php /* the point of this file is to intensively test various aspects of the parser.
    * right now, each test focuses in one aspect only (e.g. variable aliasing, arithemtic operator,
    * various control structures), while trying to combine code from other parts of the parser as well.
    */
?>
*** Testing assignments and variable aliasing: ***
<?php 
  /* This test tests assignments to variables using other variables as variable-names */
  $a = "b"; 
  $$a = "test"; 
  $$$a = "blah"; 
  ${$$$a}["associative arrays work too"] = "this is nifty";
?>
This should read "blah": <?php echo "$test\n"; ?>
This should read "this is nifty": <?php echo $blah[$test="associative arrays work too"]."\n"; ?>
*************************************************

*** Testing integer operators ***
<?php 
  /* test just about any operator possible on $i and $j (ints) */
  $i = 5;
  $j = 3;
?>
Correct result - 8:  <?php echo $i+$j; ?>

Correct result - 8:  <?php echo $i+$j; ?>

Correct result - 2:  <?php echo $i-$j; ?>

Correct result - -2:  <?php echo $j-$i; ?>

Correct result - 15:  <?php echo $i*$j; ?>

Correct result - 15:  <?php echo $j*$i; ?>

Correct result - 2:  <?php echo $i%$j; ?>

Correct result - 3:  <?php echo $j%$i; ?>

*********************************

*** Testing real operators ***
<?php 
  /* test just about any operator possible on $i and $j (floats) */
  $i = 5.0;
  $j = 3.0;
?>
Correct result - 8:  <?php echo $i+$j; ?>

Correct result - 8:  <?php echo $i+$j; ?>

Correct result - 2:  <?php echo $i-$j; ?>

Correct result - -2:  <?php echo $j-$i; ?>

Correct result - 15:  <?php echo $i*$j; ?>

Correct result - 15:  <?php echo $j*$i; ?>

Correct result - 2:  <?php echo $i%$j; ?>

Correct result - 3:  <?php echo $j%$i; ?>

*********************************

*** Testing if/elseif/else control ***

<?php 
/* sick if/elseif/else test by Andi :) */
$a = 5;
if ($a == "4") {
	echo "This "." does "."  not "." work\n";
} elseif ($a == "5") {
	echo "This "." works\n";
	$a = 6;
	if ("andi" == ($test = "andi")) {
		echo "this_still_works\n";
	} elseif (1) {
		echo "should_not_print\n";
	} else {
    		echo "should_not_print\n";
  	}
        if (44 == 43) {
		echo "should_not_print\n";
	} else {
		echo "should_print\n";
	}
} elseif ($a == 6) {
  	echo "this "."broken\n";
  	if (0) {
		echo "this_should_not_print\n";
  	} else {
		echo "TestingDanglingElse_This_Should_not_print\n";
  	}
} else {
	echo "This "."does "." not"." work\n";
}
?>


*** Seriously nested if's test ***
** spelling correction by kluzz **
<?php 
/* yet another sick if/elseif/else test by Zeev */
$i=$j=0;
echo "Only two lines of text should follow:\n";
if (0) { /* this code is not supposed to be executed */
  echo "hmm, this shouldn't be displayed #1\n";
  $j++;
  if (1) {
    $i += $j;
    if (0) {
      $j = ++$i;
      if (1) {
        $j *= $i;
        echo "damn, this shouldn't be displayed\n";
      } else {
        $j /= $i;
        ++$j;
        echo "this shouldn't be displayed either\n";
      }
    } elseif (1) {
      $i++; $j++;
      echo "this isn't supposed to be displayed\n";
    }
  } elseif (0) {
    $i++;
    echo "this definitely shouldn't be displayed\n";
  } else {
    --$j;
    echo "and this too shouldn't be displayed\n";
    while ($j>0) {
      $j--;
    }
  }
} elseif (2-2) {  /* as long as 2-2==0, this isn't supposed to be executed either */
  $i = ++$j;
  echo "hmm, this shouldn't be displayed #2\n";
  if (1) { 
    $j = ++$i;
    if (0) {
      $j = $i*2+$j*($i++);
      if (1) {
        $i++;
        echo "damn, this shouldn't be displayed\n";
      } else {
        $j++;
        echo "this shouldn't be displayed either\n";
      }
    } else if (1) {
      ++$j;
      echo "this isn't supposed to be displayed\n";
    }
  } elseif (0) {
    $j++;
    echo "this definitely shouldn't be displayed\n";
  } else {
    $i++;
    echo "and this too shouldn't be displayed\n";
  }
} else {
  $j=$i++;  /* this should set $i to 1, but shouldn't change $j (it's assigned $i's previous values, zero) */
  echo "this should be displayed. should be:  \$i=1, \$j=0.  is:  \$i=$i, \$j=$j\n";
  if (1) {
    $j += ++$i;  /* ++$i --> $i==2,  $j += 2 --> $j==2 */
    if (0) {
      $j += 40;
      if (1) {
        $i += 50;
        echo "damn, this shouldn't be displayed\n";
      } else {
        $j += 20;
        echo "this shouldn't be displayed either\n";
      }
    } else if (1) {
      $j *= $i;  /* $j *= 2  --> $j == 4 */
      echo "this is supposed to be displayed. should be:  \$i=2, \$j=4.  is:  \$i=$i, \$j=$j\n";
      echo "3 loop iterations should follow:\n";
      while ($i<=$j) {
        echo $i++." $j\n";
      }
    }
  } elseif (0) {
    echo "this definitely shouldn't be displayed\n";
  } else {
    echo "and this too shouldn't be displayed\n";
  }
  echo "**********************************\n";
}
?>

*** C-style else-if's ***
<?php 
  /* looks like without we even tried, C-style else-if structure works fine! */
  if ($a=0) {
    echo "This shouldn't be displayed\n";
  } else if ($a++) {
    echo "This shouldn't be displayed either\n";
  } else if (--$a) {
    echo "No, this neither\n";
  } else if (++$a) {
    echo "This should be displayed\n";
  } else {
    echo "This shouldn't be displayed at all\n";
  }
?>
*************************

*** WHILE tests ***
<?php 
$i=0;
$j=20;
while ($i<(2*$j)) {
  if ($i>$j) {
    echo "$i is greater than $j\n";
  } else if ($i==$j) {
    echo "$i equals $j\n";
  } else {
    echo "$i is smaller than $j\n";
  }
  $i++;
}
?>
*******************


*** Nested WHILEs ***
<?php 
$arr_len=3;

$i=0;
while ($i<$arr_len) {
  $j=0;
  while ($j<$arr_len) {
    $k=0;
    while ($k<$arr_len) {
      ${"test$i$j"}[$k] = $i+$j+$k;
      $k++;
    }
    $j++;
  }
  $i++;
}

echo "Each array variable should be equal to the sum of its indices:\n";

$i=0;
while ($i<$arr_len) {
  $j=0;
  while ($j<$arr_len) {
    $k=0;
    while ($k<$arr_len) {
      echo "\${test$i$j}[$k] = ".${"test$i$j"}[$k]."\n";
      $k++;
    }
    $j++;
  }
  $i++;
}
?>
*********************

*** hash test... ***
<?php 
/*
$i=0;

while ($i<10000) {
  $arr[$i]=$i;
  $i++;
}

$i=0;
while ($i<10000) {
  echo $arr[$i++]."\n";
}
*/
echo "commented out...";
?>

**************************

*** Hash resizing test ***
<?php 
$i = 10;
$a = "b";
while ($i > 0) {
	$a = $a . "a";
	echo "$a\n";
	$resize[$a] = $i;
	$i--;
}
$i = 10;
$a = "b";
while ($i > 0) {
	$a = $a . "a";
	echo "$a\n";
	echo $resize[$a]."\n";
	$i--;
}
?>
**************************


*** break/continue test ***
<?php 
$i=0;

echo "\$i should go from 0 to 2\n";
while ($i<5) {
  if ($i>2) {
    break;
  }
  $j=0;
  echo "\$j should go from 3 to 4, and \$q should go from 3 to 4\n";
  while ($j<5) {
    if ($j<=2) {
      $j++;
      continue;
    }
    echo "  \$j=$j\n";
    for ($q=0; $q<=10; $q++) {
      if ($q<3) {
        continue;
      }
      if ($q>4) {
        break;
      }
      echo "    \$q=$q\n";
    }
    $j++;
  }
  $j=0;
  echo "\$j should go from 0 to 2\n";
  while ($j<5) {
    if ($j>2) {
      $k=0;
      echo "\$k should go from 0 to 2\n";
      while ($k<5) {
        if ($k>2) {
          break 2;
        }
        echo "    \$k=$k\n";
        $k++;
      }
    }
    echo "  \$j=$j\n";
    $j++;
  }
  echo "\$i=$i\n";
  $i++;
}
?>
***********************

*** Nested file include test ***
<?php include("023-2.inc"); ?>
********************************

<?php 
{
  echo "Tests completed.\n";  # testing some PHP style comment...
}

} ?>
