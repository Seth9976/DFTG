// 函数名称: sub_544bb0
// 虚拟地址: 0x544bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct std::exception::VTable** __thiscallsub_544bb0(struct std::exception::VTable** arg1, void* arg2)
{
    // 第一条实际指令: *arg1 = &std::exception::`vftable'
    *arg1 = &std::exception::`vftable'
    *(arg1 + 4) = 0
    ___std_exception_copy(arg2 + 4, &arg1[1])
    return arg1
}
