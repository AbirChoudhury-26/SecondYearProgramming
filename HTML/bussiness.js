
let bgcolor = "";
if(confirm(`Do you want to add Background color`)) bgcolor =prompt("Enter your background color");
let gradientcolor1 = "";
let gradientcolor2 = "";
let gradientcolor3 = "";
if (confirm(`Do you want to add gradient color`))
{
    gradientcolor1 = prompt("Enter your gradient color 1");
    gradientcolor2 = prompt("Enter your gradient color 2");
    gradientcolor3=bgcolor;
}
let isImage=true;
let alignContent = "";
if(confirm(`Do you want to add image`)){
    alignContent=prompt("Enter your image alignment \n1)Left\n 2)Right\n3)Middle");
    alignContent.toLowerCase();
    if(alignContent==="left") alignContent="flex-start";
    else if(alignContent==="right") alignContent="flex-end";
    else alignContent="center";
} 
else isImage=false;

let name = "";
let nameColor;
name=prompt("Enter your name");
let designation = "Developer";
designation=prompt("Enter your designation");
if(confirm(`Do you want to add color to your name and designation ?`)) nameColor=prompt(`Enter a color`);

            document.write(`<body>
    
    <div class="content" style="
    display: flex;
    justify-content: center;
    align-items: center;
    flex-direction: column;
    flex-wrap: wrap;
    height: 100%;
    width: 100%;
    position: absolute;
    background-color: ${bgcolor};
    background: linear-gradient(to right,${gradientcolor1} ,${gradientcolor2},${gradientcolor3} );">


        <div class="image ${
                isImage ? "" : "hidden"
            }"style="
            align-self: ${alignContent};
            height:300px ;
            width:300px ;
            background-image:url('HTML/Logo.png');
            background-repeat:no-repeat ;
            background-size:100% 100%">
           

        </div>

        
        <div style="
        display: flex;
        justify-content: right ;
        height:50px ;
        width:300px ;
        font-size: xx-large;
        color: ${nameColor};">

            

            ${name}
            <br>
            ${designation}
        </div>
    </div>
    <link rel="stylesheet" href="webPage1.css">
 </body>`);