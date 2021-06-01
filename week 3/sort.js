let arr = [4,3,5,1,10,2,22,12];

sortAlphabetically = () =>{

    arr.sort();
    console.log(arr);
}
sortNumerically = () =>{
    arr.sort(cmp);
    console.log(arr);
}
sortNumericallyReverse = () =>{
    arr.sort(cmpd);
    console.log(arr);
}
function cmp(a,b)
{
    return Number(a)-Number(b);
}
function cmpd(a,b)
{
    return Number(b)-Number(a);
}