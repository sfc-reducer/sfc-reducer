unsigned
*
a
(
)
{
int
*
*
a
;
const
int
*
b
;
int
*
*
*
c
=
&
a
;
a
+=
*
c
!=
&
b
||
*
a
;
return
a
;
}
