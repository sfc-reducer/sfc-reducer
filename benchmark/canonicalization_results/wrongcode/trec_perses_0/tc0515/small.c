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
short
a
(
short
a
,
short
b
)
{
return
a
;
}
int
c
;
void
e
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
unsigned
a
;
}
;
struct
b
{
unsigned
a
;
}
;
union
e
{
struct
a
a
;
}
;
union
f
{
char
a
;
}
;
union
g
{
short
a
;
}
;
short
f
;
union
g
g
;
struct
a
h
;
int
*
j
=
&
h
.
a
;
static
int
*
const
*
k
=
&
j
;
union
e
l
;
unsigned
char
n
(
int
,
long
long
,
unsigned
,
union
f
)
;
long
long
o
(
struct
b
,
unsigned
)
;
long
long
p
(
struct
b
,
struct
b
,
short
)
;
struct
b
q
(
unsigned
short
,
union
g
)
;
unsigned
r
(
)
{
struct
b
c
=
{
1
}
;
struct
a
d
=
{
1
}
;
union
f
e
=
{
1
}
;
if
(
n
(
a
(
f
,
o
(
c
,
a
(
c
.
a
,
p
(
q
(
c
.
a
,
g
)
,
c
,
c
.
a
)
)
)
)
,
c
.
a
,
d
.
a
,
e
)
)
;
return
l
.
a
.
a
;
}
unsigned
char
n
(
int
a
,
long
long
b
,
unsigned
c
,
union
f
d
)
{
int
*
*
e
=
&
j
;
*
e
=
&
a
;
return
a
;
}
long
long
o
(
struct
b
a
,
unsigned
b
)
{
return
a
.
a
;
}
long
long
p
(
struct
b
a
,
struct
b
b
,
short
c
)
{
*
j
=
1
;
*
*
k
=
0
;
return
a
.
a
;
}
struct
b
q
(
unsigned
short
a
,
union
g
b
)
{
int
*
*
d
=
&
j
;
struct
b
e
=
{
1
}
;
for
(
;
g
.
a
!=
1
;
++
g
.
a
)
{
int
*
a
=
&
c
;
*
d
=
a
;
}
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
r
(
)
;
e
(
c
,
a
)
;
return
0
;
}
