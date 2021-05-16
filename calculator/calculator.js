var a;
var b;
a = prompt('Enter first number : ','0');
b = prompt('Enter Second Number','0');
var sign; 
 while(true)
 {
    sign = prompt('Enter Operation','+');
    if(sign === '+')
    {
    alert(+a + +b);
    break;
    }
    else if(sign === '-')
    {
        alert(+a - +b);
        break;
    }
    else if(sign === '*' || sign.toLowerCase() === 'x') // considering alphabet x as valid operation
    {
        alert(+a * +b);
        break;
    }
    else if(sign === '/')
    {
        alert(+a / +b);
        break;
    }
    else
    alert('Enter Valid Input');
}
