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
struct
c
{
char
d
;
char
b
;
char
c
;
unsigned
e
;
unsigned
a
;
}
;
union
b
{
short
a
;
}
;
union
b
d
;
char
*
*
c
;
struct
c
e
;
char
*
f
(
char
,
unsigned
)
;
struct
c
g
(
union
b
,
int
,
char
*
,
char
*
)
;
union
b
h
(
unsigned
char
,
char
*
,
char
*
,
char
*
)
;
unsigned
i
(
)
{
f
(
a
,
1
)
;
return
e
.
d
;
}
char
*
f
(
char
a
,
unsigned
d
)
{
char
*
b
=
&
a
;
g
(
h
(
1
,
b
,
b
,
b
)
,
a
,
b
,
*
c
)
;
return
b
;
}
struct
c
g
(
union
b
a
,
int
c
,
char
*
d
,
char
*
f
)
{
struct
c
g
=
{
1
}
;
struct
c
*
b
=
&
e
;
*
b
=
g
;
*
b
=
*
b
;
return
*
b
;
}
union
b
h
(
unsigned
char
a
,
char
*
b
,
char
*
c
,
char
*
e
)
{
return
d
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
i
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
