const
volatile
int
a
;
unsigned
b
(
c
)
{
const
int
*
*
d
=
b
;
char
*
b
=
*
d
=
&
a
;
*
b
=
*
*
d
;
return
a
;
}
