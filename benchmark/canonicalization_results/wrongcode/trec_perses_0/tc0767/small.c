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
(
int
a
,
int
b
)
{
return
a
>
1
-
a
||
a
&&
b
&&
a
?
a
:
a
+
a
;
}
int
b
;
void
d
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
char
e
;
int
*
h
=
&
b
;
int
*
*
i
=
&
h
;
short
k
;
unsigned
m
(
int
*
,
short
)
;
unsigned
o
(
)
{
char
*
a
=
&
e
;
unsigned
d
=
0x9
;
m
(
*
i
,
d
)
;
return
*
a
;
}
unsigned
m
(
int
*
b
,
short
c
)
{
short
*
d
;
short
*
*
e
=
&
d
;
short
*
f
=
&
k
;
*
b
=
a
(
*
f
^=
c
|
&
c
==
(
*
e
=
&
c
)
,
*
b
)
;
return
c
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
1
;
o
(
)
;
d
(
b
,
a
)
;
return
0
;
}
