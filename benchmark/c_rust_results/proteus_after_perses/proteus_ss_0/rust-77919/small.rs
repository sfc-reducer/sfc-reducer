fn main ( ) {
           [ 1 ; < Multiply < Five , Five > > :: VAL ] ;
}
trait TypeVal < T > {
const VAL : T ;
}
struct Five ;
trait  Multiply < N , M >{}
impl < N , M > TypeVal < usize > for Multiply < N , M >
where N : TypeVal < VAL >
{
}
