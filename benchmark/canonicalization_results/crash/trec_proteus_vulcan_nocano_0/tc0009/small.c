struct
{
int
a
;
unsigned
b
;
}
a
;
static
unsigned
*
b
=
&
a
.
b
;
unsigned
*
c
(
)
{
int
*
c
=
b
;
*
c
+=
a
.
a
;
return
b
;
}
