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
union
a
{
int
a
;
}
;
union
a
d
;
int
*
f
(
)
;
const
struct
b
*
g
(
int
*
,
unsigned
,
int
*
,
unsigned
,
int
*
)
;
int
*
h
(
)
;
int
i
(
)
{
int
*
b
=
&
a
;
f
(
)
;
return
*
b
;
}
int
*
f
(
int
*
b
)
{
int
*
c
=
&
a
;
g
(
h
(
)
,
*
c
,
&
a
,
*
c
,
b
)
;
return
&
a
;
}
const
struct
b
*
g
(
int
*
b
,
unsigned
a
,
int
*
e
,
unsigned
f
,
int
*
g
)
{
union
a
*
h
=
&
d
;
union
a
*
i
=
&
d
;
*
b
=
i
==
h
;
*
b
^=
10
;
return
b
;
}
int
*
h
(
)
{
int
*
b
=
&
a
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
i
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
