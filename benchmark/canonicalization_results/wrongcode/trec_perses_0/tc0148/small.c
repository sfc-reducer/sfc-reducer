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
&&
b
&&
a
>
0
-
b
||
a
&&
b
<
1
&&
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
h
(
int
*
,
int
*
,
char
,
short
)
;
unsigned
char
i
(
unsigned
,
unsigned
char
,
unsigned
short
,
short
,
short
)
;
static
unsigned
j
(
)
{
int
*
a
=
0
;
h
(
&
b
,
a
,
b
,
b
)
;
return
*
a
;
}
char
h
(
int
*
a
,
int
*
b
,
char
c
,
short
d
)
{
*
a
=
i
(
*
a
,
*
a
,
c
,
c
,
*
a
)
;
return
*
a
;
}
unsigned
char
i
(
unsigned
b
,
unsigned
char
c
,
unsigned
short
d
,
short
f
,
short
g
)
{
int
e
=
1
;
int
*
h
=
&
e
;
int
*
*
i
=
&
h
;
*
h
=
a
(
e
,
*
i
==
&
e
)
;
return
e
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
j
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
