document.querySelector('.btn2').addEventListener('click', function () {
  console.log('hello');
  const num5 = Number(document.querySelector('.input5').value);
  const num6 = Number(document.querySelector('.input6').value);

  if (document.querySelector('.radio-plus').checked) {
    document.querySelector('.output3').value = num5 + num6;
  }
  if (document.querySelector('.radio-minus').checked) {
    document.querySelector('.output3').value = num5 - num6;
  }
  if (document.querySelector('.radio-mul').checked)
    document.querySelector('.output3').value = num5 * num6;
  if (document.querySelector('.radio-divide').checked)
    document.querySelector('.output3').value = num5 / num6;
});

document.querySelector('.btn3').addEventListener('click', function () {
  const marks1 = Number(document.querySelector('.marks1').value);
  const marks2 = Number(document.querySelector('.marks2').value);
  const marks3 = Number(document.querySelector('.marks3').value);
  const marks4 = Number(document.querySelector('.marks4').value);
  const marks5 = Number(document.querySelector('.marks5').value);
  if (marks1 < 0 || marks2 < 0 || marks3 < 0 || marks4 < 0 || marks5 < 0)
    alert("Marks Cannot be negative");
  else {
    const total = marks1 + marks2 + marks3 + marks4 + marks5;
    const percentage = (total / 500) * 100;
    document.querySelector('.total').value = total;
    document.querySelector('.percentage').value = percentage;

    if (percentage >= 80) document.querySelector('.grade').value = 'A';
    else if (percentage >= 70 && percentage < 80)
      document.querySelector('.grade').value = 'B';
    else if (percentage >= 60 && percentage < 70)
      document.querySelector('.grade').value = 'C';
    else if (percentage >= 50 && percentage < 60)
      document.querySelector('.grade').value = 'D';
    else if (percentage >= 40 && percentage < 50)
      document.querySelector('.grade').value = 'E';
    else document.querySelector('.grade').value = 'F';
  }
});

document.querySelector('.btn4').addEventListener('click', function () {
  const oddEven = Number(document.querySelector('.oddEven').value);
  if (oddEven % 2) document.querySelector('.ans').innerHTML = 'Number is Odd';
  else document.querySelector('.ans').innerHTML = 'Number is Even';
});

document.querySelector('.btn5').addEventListener('click', function () {
  const num7 = Number(document.querySelector('.two-num-1').value);
  const num8 = Number(document.querySelector('.two-num-2').value);
  if (num7 > num8)
    document.querySelector(
      '.ans1'
    ).innerHTML = ` ${num7} is greater than ${num8}`;
  else if (num8 > num7)
    document.querySelector(
      '.ans1'
    ).innerHTML = `${num8} is greater than ${num7}`;
  else
    document.querySelector(
      '.ans1'
    ).innerHTML = ` "${num7}" is equal  "${num8}"`;
});

document.querySelector('.btn6').addEventListener('click', function () {
  const num9 = Number(document.querySelector('.three-num-1').value);
  const num10 = Number(document.querySelector('.three-num-2').value);
  const num11 = Number(document.querySelector('.three-num-3').value);

  if (num9 > num10 && num9 > num11)
    document.querySelector(
      '.ans2'
    ).innerHTML = ` ${num9} is greatest of all`;
  else if (num10 > num9 && num10 > num11)
    document.querySelector(
      '.ans2'
    ).innerHTML = ` ${num10} is greatest of all`;
  else if (num11 > num9 && num11 > num10)
    document.querySelector(
      '.ans2'
    ).innerHTML = ` ${num11} is greatest of all`;
  else if(num9==num10 && num10==num11 && num11==num9)
  document.querySelector('.ans2').innerHTML = 'All are equal';
  else
  document.querySelector('.ans2').innerHTML = 'No Number is Greatest';
});

document.querySelector('.btn7').addEventListener('click', function () {
  const leapYear = Number(document.querySelector('.leap-year').value);
  if ((leapYear % 4 == 0 && leapYear % 100 != 0) || leapYear % 400 == 0)
    document.querySelector('.ans3').innerHTML = `Leap Year`;
  else document.querySelector('.ans3').innerHTML = `Normal Year`;
});

document.querySelector('.btn8').addEventListener('click', function () {
  let factorialNumber = Number(document.querySelector('.factorial').value);
  if (factorialNumber === 0 || factorialNumber === 1)
    document.querySelector(
      '.ans4'
    ).innerHTML = `Factorial of ${factorialNumber} is 1`;
  else {
    let case1 = factorialNumber - 1;
    const ans1 = factorialNumber;
    while (case1) {
      factorialNumber = factorialNumber * case1;
      case1--;
    }
    document.querySelector(
      '.ans4'
    ).innerHTML = `factorial of ${ans1} is ${factorialNumber}`;
  }
});

document.querySelector('.btn9').addEventListener('click', function () {
  const sum = Number(document.querySelector('.sum').value);
  document.querySelector('.ans5').innerHTML = `The sum of ${sum} numbers is ${
    (sum * (sum + 1)) / 2
  }`;
});

document.querySelector('.btn10').addEventListener('click', function () {
  const prime = Number(document.querySelector('.prime').value);
  let ans = false;
  for (let i = 2; i < prime; i++) {
    if (prime % i == 0) {
      ans = true;
      break;
    }
  }
  if (!ans) document.querySelector('.ans6').innerHTML = `${prime} is a Prime`;
  else document.querySelector('.ans6').innerHTML = `${prime} is not a Prime`;
});

document.querySelector('.btn11').addEventListener('click', function () {
  const palindrome = document.querySelector('.palindrome').value;
  let reverse = palindrome;
  reverse = reverse.split('').reverse().join('');
  if (reverse === palindrome)
    document.querySelector('.ans7').innerHTML = `${palindrome} is a Palindrome`;
  else
    document.querySelector(
      '.ans7'
    ).innerHTML = `${palindrome} is not a Palindrome`;
});

document.querySelector('.btn12').addEventListener('click', function () {
  let armstrong = Number(document.querySelector('.armstrong').value);
  const armstrong2 = armstrong;
  let ans = 0,
    temp = 0;
  while (armstrong) {
    temp = armstrong % 10;
    ans += temp ** 3;
    armstrong = Math.floor(armstrong / 10);
  }
  if (ans === armstrong2)
    document.querySelector(
      '.ans8'
    ).innerHTML = `${armstrong2} is a Armstrong Number`;
  else
    document.querySelector(
      '.ans8'
    ).innerHTML = `${armstrong2} is not a Armstrong Number`;
});

document.querySelector('.btn13').addEventListener('click', function () {
  const num12 = Number(document.querySelector('.oddEvenList').value);
  let j;
  for (let i = 1; i <= num12; i += 2) {
    j = i + 1;
    document.querySelector('.ans9').innerHTML += ` ${i} `;
    document.querySelector('.ans10').innerHTML += ` ${j} `;
  }
});
