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
int
*
d
;
int
*
*
const
f
=
&
d
;
static
int
*
*
const
*
g
=
&
f
;
unsigned
short
i
(
long
long
,
char
,
unsigned
)
;
unsigned
char
j
(
unsigned
,
int
,
unsigned
,
short
)
;
short
k
(
)
{
int
a
=
1
;
i
(
j
(
a
,
a
,
a
,
a
)
,
a
,
a
)
;
return
a
;
}
unsigned
short
i
(
long
long
b
,
char
c
,
unsigned
d
)
{
int
*
e
=
&
a
;
*
*
g
=
e
;
*
*
g
=
*
f
;
*
*
f
|=
c
;
return
a
;
}
unsigned
char
j
(
unsigned
a
,
int
b
,
unsigned
c
,
short
e
)
{
int
*
f
=
&
a
;
int
*
*
g
=
&
d
;
*
g
=
f
;
return
*
*
g
;
}
int
main
(
)
{
k
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
