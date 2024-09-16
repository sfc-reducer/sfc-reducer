fn auto    (){
           [ 1 ;   Multiply                   :: VAL ] ;
}
trait TypeVal < Five>{
const VAL : usize;
}
struct Five ;
trait  Multiply < Multiply,Multiply>{}
impl            TypeVal< Five  > for Multiply < Five,Five>
where Five:TypeVal< VAL >
{
}
