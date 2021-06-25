class Color{
    constructor(r,g,b)
    {
        this.r = String(parseInt(r)%256);
        this.g = String(parseInt(g)%256);
        this.b = String(parseInt(b)%256);
    }
    rgb(){
        return 'rgb('+ `${this.r}` +','+ `${this.g}` +','+ `${this.b}`+')';
    }
   hex(){
    return "#" + toHexadecimal(this.r) + toHexadecimal(this.g) + toHexadecimal(this.b);
    }
}

let purple = new Color(101,31,255);
let turquoise = new Color(64,224,208);

alert("Purple : " + purple.rgb() + ' ' + purple.hex());
console.log(purple.hex() + " " + purple.rgb());

alert("Turquoise : " + turquoise.rgb() + ' ' + turquoise.hex());
console.log(turquoise.hex() + " " + turquoise.rgb());


function toHexadecimal(r)
{
    let answer = '';
    let R = parseInt(r);
    if(R === 0)
    {
        return "00"
    }
    while(parseInt(R) != 0)
    {
        let d = parseInt(R)%16;
        if(d == 10)
        answer = answer.concat('a');
        else if( d == 11)
        answer = answer.concat('b')
        else if( d == 12)
        answer = answer.concat('c')
        else if( d == 13)
        answer = answer.concat('d')
        else if( d == 14)
        answer = answer.concat('e')
        else if( d == 15)
        answer = answer.concat('f')
        else
        answer = answer.concat(parseInt(R)%16);

        R = parseInt(parseInt(R)/16);
    }
    let splitStr = answer.split("");
    return splitStr.reverse().join("");
}

function changeColor()
{
    let r = prompt("Enter r");
    let g = prompt("Enter g");
    let b = prompt("Enter b");
    let c = new Color(r,g,b);
    document.getElementById("heading").style.color = c.rgb();
    alert("Color" + "\n" + c.hex() + "\n" + c.rgb());
    console.log(c.hex() + " " + c.rgb());
}