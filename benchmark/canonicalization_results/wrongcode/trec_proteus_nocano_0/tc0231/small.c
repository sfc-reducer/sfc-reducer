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
void
c
(
a
,
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
a
=
1
;
const
int
*
const
d
=
&
a
;
static
const
int
*
const
*
e
=
&
d
;
long
long
f
(
int
,
unsigned
char
)
;
int
g
(
char
)
;
const
int
*
const
*
h
(
char
,
int
*
*
)
;
int
i
(
)
{
return
f
(
a
,
a
)
;
}
long
long
f
(
int
a
,
unsigned
char
b
)
{
return
g
(
a
)
;
}
int
g
(
char
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
while
(
b
--
)
{
int
*
*
b
=
&
c
;
h
(
1
,
b
)
;
a
=
0
;
*
c
=
*
*
e
;
}
return
a
;
}
const
int
*
const
*
h
(
char
a
,
int
*
*
b
)
{
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
