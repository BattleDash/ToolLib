#pragma once

#define TL_DECLARE_FUNC(offset, returnType, name, ...) \
    typedef returnType(__fastcall * name##_t)(__VA_ARGS__);  \
    static name##_t name = reinterpret_cast<name##_t>(offset);
