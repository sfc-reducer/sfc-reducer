signed
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
b
(
b
,
a
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
short
a
;
}
;
char
c
[
]
[
1
]
=
{
1
,
1
,
1
,
1
,
1
,
1
,
0x3
}
;
unsigned
char
*
d
;
union
a
e
(
unsigned
*
)
;
unsigned
f
(
)
{
int
*
d
=
&
a
;
e
(
&
a
)
;
return
*
d
;
}
union
a
e
(
unsigned
*
a
)
{
union
a
b
[
]
[
1
]
[
1
]
=
{
1
}
;
unsigned
char
*
*
e
=
&
d
;
unsigned
char
*
*
*
f
=
&
e
;
*
a
=
c
[
3
]
[
3
]
>
(
*
f
==
&
d
)
;
return
b
[
1
]
[
1
]
[
1
]
;
}
int
main
(
)
{
int
a
=
f
(
)
;
b
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
