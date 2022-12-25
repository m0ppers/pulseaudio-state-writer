# pulseaudio-state-writer

Continously writes a JSONL formatted structure that shows the current state of pulseaudio. Intended to be used by for example bars for desktop environments.

Example:

```
{"sink":{"icons":["speaker"],"muted":false,"volume":33},"source":{"muted":false,"volume":0}}
```

The logic has been extracted from https://github.com/Alexays/Waybar/ because they are exactly doing what I want/need.
The rest of the code is very hacky but should work (I just wanted to get the job done)