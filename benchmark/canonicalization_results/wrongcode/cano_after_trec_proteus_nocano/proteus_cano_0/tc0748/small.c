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
char
d
;
void
a
(
char
a
,
void
*
b
,
char
__m128
)
{
d
+=
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
int
c
[
]
[
1
]
;
short
e
[
]
[
1
]
[
1
]
;
unsigned
char
f
(
short
,
unsigned
char
,
int
*
,
const
int
*
)
;
char
g
(
)
{
int
*
a
=
*
c
;
f
(
1
,
1
,
a
,
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
f
(
short
__m128
,
unsigned
char
__m128d
,
int
*
c
,
const
int
*
d
)
{
return
++
*
c
;
}
int
main
(
)
{
int
i
,
j
;
g
(
)
;
for
(
i
=
1
;
i
<
5
;
i
++
)
if
(
j
=
0
)
;
else
a
(
e
[
i
]
[
j
]
[
j
]
,
""
,
d
)
;
b
(
d
,
d
)
;
return
0
;
}
