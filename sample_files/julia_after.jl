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

for mime in ipy_mime
    @eval begin
        function display(d::InlineDisplay, ::MIME{Symbol($mime)}, x)
            send_ipython(publish[],
                         msg_pub(execute_msg, "display_data",
                                 Dict(
                                  "metadata" => metadata(x), # optional
                                  "data" => Dict($mime => limitstringmime(MIME($mime), x)))))
        end
        displayable(d::InlineDisplay, ::MIME{Symbol($mime)}) = true
    end
end

# deal with annoying application/x-latex == text/latex synonyms
display(d::InlineDisplay, m::MIME"application/x-latex", x) = display(d, MIME("text/latex"), limitstringmime(m, x))

# deal with annoying text/javascript == application/javascript synonyms
display(d::InlineDisplay, m::MIME"text/javascript", x) = display(d, MIME("application/javascript"), limitstringmime(m, x))

# If the user explicitly calls display("foo/bar", x), we send
# the display message, also sending text/plain for text data.
displayable(d::InlineDisplay, M::MIME) = istextmime(M)
function display(d::InlineDisplay, M::MIME, x)
    sx = limitstringmime(M, x)
    d = Dict(string(M) => sx)
    if istextmime(M)
        d["text/plain"] = sx # directly show text data, e.g. text/csv
    end
    send_ipython(publish[],
                 msg_pub(execute_msg, "display_data",
                         Dict("metadata" => metadata(x), # optional
                              "data" => d)))
end

# override display to send IPython a dictionary of all supported
# output types, so that IPython can choose what to display.
function display(d::InlineDisplay, x)
    undisplay(x) # dequeue previous redisplay(x)
    send_ipython(publish[],
                 msg_pub(execute_msg, "display_data",
                         Dict("metadata" => metadata(x), # optional
                              "data" => display_dict(x))))
end

# we overload redisplay(d, x) to add x to a queue of objects to display,
# with the actual display occuring when display() is called or when
# an input cell has finished executing.

function redisplay(d::InlineDisplay, x)
    if !in(x,displayqueue)
        push!(displayqueue, x)
    end
end

function display()
    q = copy(displayqueue)
    empty!(displayqueue) # so that undisplay in display(x) is no-op
    for x in q
        display(x)
    end
end
