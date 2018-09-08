
function grade(marks){ 
    if(marks>90){
    x='A';
        }
        else if(80<marks&&marks<90){
            x='B';
        }
        else if(70<marks&&marks<80){
            x='C';
        }
        else if(60<marks&&marks<70){
            x='D';
        }
        else if(50<marks&&marks<60){
            x='E';
        }
        else{
            x='F'
        }

console.log('you got a '+x+'('+marks+')');
       
} 
grade(91);
grade(87);
grade(30);