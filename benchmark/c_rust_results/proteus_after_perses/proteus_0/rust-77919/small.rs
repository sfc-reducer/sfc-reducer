fn main ( ) {
           [ 1 ; < Multiply < Five , Five > > :: VAL ] ;
}
trait TypeVal < T > {
const VAL : usize;
}
struct Five ;
trait  Multiply < N , M >{}
impl < N     > TypeVal < N     > for Multiply < N , N >
where N : TypeVal < VAL >
{
}
