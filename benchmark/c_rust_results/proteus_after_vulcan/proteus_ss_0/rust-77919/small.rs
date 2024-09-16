fn auto    (){
           [ 1 ;   Multiply                   :: VAL ] ;
}
trait TypeVal < VAL >{
const VAL : usize;
}
struct Five ;
trait  Multiply < Five,Five>{}
impl            TypeVal< Five  > for Multiply < Five,Five>
where Five:TypeVal< VAL >
{
}
