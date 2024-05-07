import Base: display, redisplay

struct InlineDisplay <: AbstractDisplay end

# supported MIME types for inline display in IPython, in descending order
# of preference (descending "richness")
const ipy_mime = [
    "application/vnd.dataresource+json",
    ["application/vnd.vegalite.v$n+json" for n in 3:-1:2]...,
    ["application/vnd.vega.v$n+json" for n in 5:-1:3]...,
    "application/vnd.plotly.v1+json",
    "text/html",
    "text/latex",
    "image/svg+xml",
    "image/png",
    "image/jpeg",
    "text/plain",
    "text/markdown",
    "application/javascript"
]

# need special handling for showing a string as a textmime
# type, since in that case the string is assumed to be
# raw data unless it is text/plain
israwtext(::MIME, x::AbstractString) = true
israwtext(::MIME"text/plain", x::AbstractString) = false
israwtext(::MIME, x) = false

InlineIOContext(io, KVs::Pair...) = IOContext(
    io,
    :limit=>true, :color=>true, :jupyter=>true,
    KVs...
)

# convert x to a string of type mime, making sure to use an
# IOContext that tells the underlying show function to limit output
function limitstringmime(mime::MIME, x)
    buf = IOBuffer()
    if istextmime(mime)
        if israwtext(mime, x)
            return String(x)
        else
            show(InlineIOContext(buf), mime, x)
        end
    else
        b64 = Base64EncodePipe(buf)
        if isa(x, Vector{UInt8})
            write(b64, x) # x assumed to be raw binary data
        else
            show(InlineIOContext(b64), mime, x)
        end
        close(b64)
    end
    return String(take!(buf))
end
