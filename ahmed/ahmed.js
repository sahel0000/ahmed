document.getElementById('loginfrom').addEventListener('submit',function(event){
    var email;
    email=document.getElementById('email').value;
    var password;
    password=document.getElementById('password').value;
    if (valideateEmail(email&&password) ){
        window.location.href='ahmedd.html';
    }else{
        alert('please enter the corect email and password');
    }
});
function valideateEmail(email){
    var e=  /^[a-zA-Zo-9.-]+\.[a-zA-Z]{2,6}$/;
    return e,test(email)
}

      /*   document.getElementById('loginform').style.display='non'
        document.getElementById('wellcomemessage').style.display='block';
        
    }else{
        alert('please enter your email and password')
    } */
