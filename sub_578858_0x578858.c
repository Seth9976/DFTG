// 函数名称: sub_578858
// 虚拟地址: 0x578858
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __stdcallsub_578858(int32_t arg1, EXCEPTION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    RtlUnwind(arg1, &data_578882, arg2, nullptr)
    uint32_t result = arg2->ExceptionFlags & 0xfffffffd
    arg2->ExceptionFlags = result
    ExceptionList->Next = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
