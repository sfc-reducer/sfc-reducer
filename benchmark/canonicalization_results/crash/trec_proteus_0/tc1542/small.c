int
*
a
;
volatile
char
*
b
;
volatile
int
*
*
c
;
static
volatile
int
*
*
*
d
=
&
c
;
void
e
(
)
{
for
(
;
;
)
{
int
*
*
e
=
&
a
;
if
(
e
==
*
d
)
*
b
;
++
*
c
;
}
}
