import React, { Component } from 'react'

interface TagsInputProps {
    tags: string
    onChange: (e: React.ChangeEvent<HTMLInputElement>) => void
}

export class TagsInput extends Component<TagsInputProps> {
    render() {
        return (
                    <label className="flex flex-col gap-1.5">
                        <span className="text-sm font-medium text-[var(--sea-ink-soft)]">
                            Tags
                        </span>
                        <input
                            type="text"
                            value={tags}
                            onChange={(e) => setTags(e.target.value)}
                            placeholder="nature, sunset, ocean"
                            className="rounded-xl border border-[var(--line)] bg-white/60 px-3 py-2 text-sm text-[var(--sea-ink)] outline-none focus:border-[var(--lagoon-deep)]"
                        />
                    </label>
        )
    }
}
