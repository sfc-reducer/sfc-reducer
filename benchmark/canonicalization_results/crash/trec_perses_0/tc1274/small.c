const
volatile
int
a
;
unsigned
c
(
b
)
{
const
int
*
*
d
=
&
a
;
char
*
e
=
&
a
;
*
d
=
&
a
;
*
e
=
*
*
d
;
return
a
;
}
