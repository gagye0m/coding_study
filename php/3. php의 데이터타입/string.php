<!doctype html>
<html>
<body>
  <h1>String & String Operator</h1>
<?php
echo "Hello \"w\"ord"; //\를 이용해서 "그대로 표현가능 '이든 "이든 둘다 문자열 표현할때 쓸 수 있음.'
?>
  <h2>concatenation operator</h2>
  <?php
  echo "Hello "."world"; // '.'은 좌항과 우항의 문자열을 결합해서 하나의 문자열로 나타냄.
  ?>
  <h2>String length function</h2>
  <?php
  echo strlen("Hello world"); //strlen함수로 문자가 몇개인지 알 수 있다.
   ?>
</body>
</html>
