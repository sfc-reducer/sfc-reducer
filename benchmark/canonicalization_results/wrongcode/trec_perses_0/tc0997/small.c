int
printf
(
const
char
*
,
...
)
;
int
a
;
void
c
(
int
a
,
int
b
)
{
printf
(
"%x"
,
a
)
;
}
struct
a
{
char
a
;
}
;
unsigned
d
=
0xE
;
int
*
e
=
&
a
;
struct
a
f
;
char
*
g
=
&
f
.
a
;
char
*
*
h
=
&
g
;
int
*
i
(
)
;
char
j
(
)
{
i
(
d
)
;
return
*
*
h
;
}
int
*
i
(
a
)
{
int
*
b
=
&
a
;
int
*
*
c
=
&
b
;
*
e
=
a
>
(
*
c
==
&
a
)
;
return
b
;
}
int
main
(
)
{
j
(
)
;
c
(
a
,
a
)
;
return
0
;
}
