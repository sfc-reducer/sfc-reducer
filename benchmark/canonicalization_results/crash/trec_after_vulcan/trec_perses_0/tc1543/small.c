struct
a
{
char
a
;
long
b
;
}
;
struct
{
struct
a
a
;
}
c
;
static
void
*
d
=
&
c
.
a
.
b
;
char
a
(
e
)
{
unsigned
a
=
1
;
long
*
b
=
&
c
.
a
.
b
;
if
(
c
.
a
.
a
)
for
(
;
a
;
a
+=
1
)
*
b
=
(
d
==
b
&&
c
.
a
.
a
)
>
e
;
return
a
;
}
