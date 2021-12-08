function find_hr_min_sec(seconds)
{
var hr=Math.floor(seconds/3600);
seconds=seconds%3600;
var min=Math.floor(seconds/60);
var sec=seconds%60;
return ("hours:"+hr+" minutes:"+min+" seconds:"+sec);
}
let seconds=129;
document.write(find_hr_min_sec(seconds));