#ifndef __FOO_H__
#define __FOO_H__


#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus


typedef void (*foo_run_magic)(int);

void get_magic_num(void (*callback)(int magic));


#ifdef __cplusplus
}
#endif // __cplusplus



#endif // __FOO_H__

