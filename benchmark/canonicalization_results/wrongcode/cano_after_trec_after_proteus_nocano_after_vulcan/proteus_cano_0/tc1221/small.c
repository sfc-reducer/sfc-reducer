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
static
int
a
(
a
)
{
return
-
a
;
}
void
b
(
a
,
__m128
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
b
{
char
a
;
}
;
char
d
;
char
*
c
=
&
d
;
char
*
*
e
=
&
c
;
int
*
*
*
f
;
int
g
(
union
b
,
unsigned
,
short
,
unsigned
char
,
unsigned
char
)
;
int
h
(
union
b
,
union
b
,
unsigned
)
;
union
b
i
(
)
;
char
j
(
)
{
union
b
a
=
{
1
}
;
g
(
a
,
d
,
d
,
1
,
d
)
;
return
*
c
;
}
int
g
(
union
b
a
,
unsigned
__m128
,
short
__m128d
,
unsigned
char
__m128i
,
unsigned
char
f
)
{
return
h
(
i
(
)
,
a
,
*
c
)
;
}
int
h
(
union
b
c
,
union
b
__m128
,
unsigned
__m128d
)
{
int
*
*
*
*
g
=
&
f
;
int
*
*
*
*
h
=
&
f
;
c
.
a
=
a
(
h
==
g
)
;
*
*
e
=
c
.
a
;
return
d
;
}
union
b
i
(
)
{
union
b
a
=
{
1
}
;
return
a
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
j
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
