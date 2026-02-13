#!/bin/bash
# Smart rewrite of commit dates to restore heatmap naturally

START_DATE="2024-01-01"  # change this if you want another start date
current_date=$(date -d "$START_DATE" +%s)

# Get all commits in reverse (oldest first)
commits=$(git rev-list --reverse HEAD)

for commit_hash in $commits; do
    # Random time for natural look
    hour=$((RANDOM % 24))
    minute=$((RANDOM % 60))
    second=$((RANDOM % 60))

    new_date=$(date -d "@$current_date" "+%Y-%m-%d $hour:$minute:$second")

    # Rewrite commit
    GIT_COMMITTER_DATE="$new_date" git commit --amend --no-edit --date "$new_date" --allow-empty

    # Randomly increment day 1-3 for natural spacing
    increment=$((1 + RANDOM % 3))
    current_date=$((current_date + increment*86400))
done

echo "✅ All commits rewritten with natural dates!"
